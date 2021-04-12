/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(NSString *)cacheKey;
-(void)setCacheKey:(NSString *)arg1 ;
-(CGSize)imageSize;
-(NSArray *)completionHandlers;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setCompletionHandlers:(NSArray *)arg1 ;
-(PKPass *)pass;
-(void)setPass:(PKPass *)arg1 ;
-(BOOL)fullPass;
-(void)setFullPass:(BOOL)arg1 ;
-(BOOL)stacked;
-(void)setStacked:(BOOL)arg1 ;
@end

