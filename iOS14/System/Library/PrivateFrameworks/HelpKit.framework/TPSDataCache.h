/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/

#import <HelpKit/HelpKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface TPSDataCache : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _cacheType;
	long long _maxAge;
	unsigned long long _fileSize;
	NSString* _identifier;
	NSString* _lastModified;
	NSString* _languageCode;
	NSDate* _updatedDate;

}

@property (nonatomic,readonly) BOOL expired; 
@property (assign,nonatomic) unsigned long long cacheType;              //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) long long maxAge;                          //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;               //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * lastModified;                   //@synthesize lastModified=_lastModified - In the implementation block
@property (nonatomic,retain) NSString * languageCode;                   //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,retain) NSDate * updatedDate;                      //@synthesize updatedDate=_updatedDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLastModified:(NSString *)arg1 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(unsigned long long)fileSize;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(NSString *)languageCode;
-(NSString *)lastModified;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(long long)maxAge;
-(NSDate *)updatedDate;
-(void)setUpdatedDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setMaxAge:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)expired;
@end

