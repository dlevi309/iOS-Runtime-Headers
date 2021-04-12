/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryMedia, NSString;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf {

	PKDiscoveryMedia* _media;
	NSString* _captionKey;
	long long _displayType;
	NSString* _localizedCaption;

}

@property (nonatomic,retain) NSString * localizedCaption;              //@synthesize localizedCaption=_localizedCaption - In the implementation block
@property (nonatomic,readonly) PKDiscoveryMedia * media;               //@synthesize media=_media - In the implementation block
@property (nonatomic,readonly) NSString * captionKey;                  //@synthesize captionKey=_captionKey - In the implementation block
@property (nonatomic,readonly) long long displayType;                  //@synthesize displayType=_displayType - In the implementation block
+(BOOL)supportsSecureCoding;
-(PKDiscoveryMedia *)media;
-(NSString *)captionKey;
-(long long)displayType;
-(NSString *)localizedCaption;
-(void)setLocalizedCaption:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

