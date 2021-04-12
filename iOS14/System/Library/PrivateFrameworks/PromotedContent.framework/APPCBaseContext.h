/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
*/

#import <PromotedContent/PromotedContent-Structs.h>
#import <libobjc.A.dylib/APPCPromotableBaseContext.h>

@class NSUUID, NSArray, NSString;

@interface APPCBaseContext : NSObject <APPCPromotableBaseContext> {

	 adjacentInternal;
	 maxSize;
	 current;
	 next;
	 adjacent;
	 requestedAd;

}

@property (readonly,nonatomic) NSUUID * identifier; 
@property (readonly,nonatomic) CGSize maxSize; 
@property (readonly,nonatomic) id<APPCPromotableContentDepiction> current; 
@property (readonly,nonatomic) NSArray * next; 
@property (readonly,nonatomic) NSArray * adjacent; 
@property (copy,nonatomic) NSString * requestedAd; 
-(NSArray *)next;
-(id)init;
-(id<APPCPromotableContentDepiction>)current;
-(CGSize)maxSize;
-(NSUUID *)identifier;
-(NSArray *)adjacent;
-(NSString *)requestedAd;
-(void)setRequestedAd:(NSString *)arg1 ;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 next:(id)arg4 ;
-(id)initWithMaxSize:(CGSize)arg1 requestedAd:(id)arg2 current:(id)arg3 adjacent:(id)arg4 ;
@end

