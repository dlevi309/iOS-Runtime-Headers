/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@interface PXSuggestionToken : NSObject {

	BOOL _canceled;
	unsigned long long _token;

}

@property (assign,nonatomic) unsigned long long token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL canceled;                       //@synthesize canceled=_canceled - In the implementation block
-(id)init;
-(BOOL)canceled;
-(void)setToken:(unsigned long long)arg1 ;
-(unsigned long long)token;
-(void)cancel;
@end

