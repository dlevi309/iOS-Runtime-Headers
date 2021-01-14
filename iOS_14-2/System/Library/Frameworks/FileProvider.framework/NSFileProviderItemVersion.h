/*
* Generated on Thursday, January 14, 2021 at 2:23:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithContentVersion:(id)arg1 metadataVersion:(id)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)metadataVersion;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)contentVersion;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg1 ;
@end

