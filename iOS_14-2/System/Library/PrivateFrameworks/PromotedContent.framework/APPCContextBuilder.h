/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <libobjc.A.dylib/APPCPromotableBaseContext.h>

@class NSUUID, NSArray, NSString, APPCNewsSupplementalContext, APPCContext;

@interface APPCContextBuilder : NSObject <APPCPromotableBaseContext> {

	 maxSize;
	 current;
	 next;
	 requestedAd;
	 newsContext;
	 resourceLock;
	 adjacentInternal;

}

@property (copy,nonatomic) NSUUID * identifier; 
@property (assign,nonatomic) CGSize maxSize; 
@property (retain,nonatomic) id<APPCPromotableContentDepiction> current; 
@property (copy,nonatomic) NSArray * next; 
@property (readonly,nonatomic) NSArray * adjacent; 
@property (copy,nonatomic) NSString * requestedAd; 
@property (retain,nonatomic) APPCNewsSupplementalContext * newsContext; 
@property (readonly,nonatomic) APPCContext * context; 
-(void)setMaxSize:(CGSize)arg1 ;
-(NSArray *)next;
-(id)init;
-(APPCContext *)context;
-(id<APPCPromotableContentDepiction>)current;
-(void)setNext:(NSArray *)arg1 ;
-(CGSize)maxSize;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)adjacent;
-(void)setCurrent:(id<APPCPromotableContentDepiction>)arg1 ;
-(NSString *)requestedAd;
-(void)setRequestedAd:(NSString *)arg1 ;
-(APPCNewsSupplementalContext *)newsContext;
-(void)setNewsContext:(APPCNewsSupplementalContext *)arg1 ;
-(id)initWithMaxSize:(CGSize)arg1 current:(id)arg2 next:(id)arg3 newsContext:(id)arg4 requestedAd:(id)arg5 ;
-(id)initWithMaxSize:(CGSize)arg1 current:(id)arg2 newsContext:(id)arg3 requestedAd:(id)arg4 ;
-(BOOL)addAdjacentWithAdjacent:(id)arg1 error:(id*)arg2 ;
-(void)removeAdjacentWithAdjacent:(id)arg1 ;
@end

