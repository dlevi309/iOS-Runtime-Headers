/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CPLReference.h>

@class NSDictionary, NSString;

@interface CPLPersonReference : NSObject <NSSecureCoding, NSCopying, CPLReference> {

	NSDictionary* _extraProperties;
	NSString* _personIdentifier;

}

@property (nonatomic,copy) NSString * personIdentifier;                 //@synthesize personIdentifier=_personIdentifier - In the implementation block
@property (nonatomic,copy) NSDictionary * extraProperties;              //@synthesize extraProperties=_extraProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personIdentifier;
-(NSDictionary *)extraProperties;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(void)setExtraProperties:(NSDictionary *)arg1 ;
-(id)initWithSerializedString:(id)arg1 ;
-(id)serializedString;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
@end

