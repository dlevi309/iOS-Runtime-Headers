/*
* Generated on Monday, March 1, 2021 at 2:32:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NSFileProviderItemVersion : NSObject <NSSecureCoding> {

	NSData* _contentVersion;
	NSData* _metadataVersion;

}

@property (nonatomic,readonly) NSData * contentVersion;               //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,readonly) NSData * metadataVersion;              //@synthesize metadataVersion=_metadataVersion - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(BOOL)isEmpty;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contentVersion;
-(id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2 ;
-(NSData *)metadataVersion;
@end

