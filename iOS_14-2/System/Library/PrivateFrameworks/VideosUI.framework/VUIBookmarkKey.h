/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class NSString;

@interface VUIBookmarkKey : NSObject {

	NSString* _identifier;
	long long _keyType;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long keyType;                  //@synthesize keyType=_keyType - In the implementation block
-(id)init;
-(id)description;
-(long long)keyType;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 keyType:(long long)arg2 ;
@end

