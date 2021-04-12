/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * extraProperties;              //@synthesize extraProperties=_extraProperties - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)personIdentifier;
-(NSDictionary *)extraProperties;
-(void)setPersonIdentifier:(NSString *)arg1 ;
-(void)setExtraProperties:(NSDictionary *)arg1 ;
-(id)initWithSerializedString:(id)arg1 ;
-(id)serializedString;
-(id)initWithCPLArchiver:(id)arg1 ;
-(id)plistArchiveWithCPLArchiver:(id)arg1 ;
@end

