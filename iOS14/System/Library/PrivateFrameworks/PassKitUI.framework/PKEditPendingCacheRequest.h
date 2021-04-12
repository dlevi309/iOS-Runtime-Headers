/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class NSString, PKPass, NSArray;

@interface PKEditPendingCacheRequest : NSObject {

	BOOL _fullPass;
	BOOL _stacked;
	NSString* _cacheKey;
	PKPass* _pass;
	long long _priority;
	NSArray* _completionHandlers;
	CGSize _imageSize;

}

@property (nonatomic,retain) NSString * cacheKey;                       //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,retain) PKPass * pass;                             //@synthesize pass=_pass - In the implementation block
@property (assign,nonatomic) BOOL fullPass;                             //@synthesize fullPass=_fullPass - In the implementation block
@property (assign,nonatomic) BOOL stacked;                              //@synthesize stacked=_stacked - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                          //@synthesize imageSize=_imageSize - In the implementation block
@property (assign,nonatomic) long long priority;                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,retain) NSArray * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
-(NSString *)cacheKey;
-(CGSize)imageSize;
-(void)setPass:(PKPass *)arg1 ;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(void)setFullPass:(BOOL)arg1 ;
-(void)setStacked:(BOOL)arg1 ;
-(BOOL)stacked;
-(PKPass *)pass;
-(NSArray *)completionHandlers;
-(unsigned long long)hash;
-(void)setCacheKey:(NSString *)arg1 ;
-(BOOL)fullPass;
-(void)setImageSize:(CGSize)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

