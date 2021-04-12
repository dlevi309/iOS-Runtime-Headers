/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)displayType;
-(PKDiscoveryMedia *)media;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(NSString *)captionKey;
-(NSString *)localizedCaption;
-(void)setLocalizedCaption:(NSString *)arg1 ;
@end

