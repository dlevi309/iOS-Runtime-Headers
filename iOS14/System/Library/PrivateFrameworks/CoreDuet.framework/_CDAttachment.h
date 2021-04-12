/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID, NSNumber, NSURL;

@interface _CDAttachment : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _creationDate;
	NSString* _uti;
	NSUUID* _identifier;
	NSUUID* _cloudIdentifier;
	NSString* _photoLocalIdentifier;
	NSNumber* _size;
	NSURL* _contentURL;
	NSString* _contentText;

}

@property (retain) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (retain) NSString * uti;                               //@synthesize uti=_uti - In the implementation block
@property (retain) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSUUID * cloudIdentifier;                     //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (retain) NSString * photoLocalIdentifier;              //@synthesize photoLocalIdentifier=_photoLocalIdentifier - In the implementation block
@property (retain) NSNumber * size;                              //@synthesize size=_size - In the implementation block
@property (retain) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * contentText;                       //@synthesize contentText=_contentText - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
+(id)attachmentWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 ;
-(NSString *)uti;
-(NSURL *)contentURL;
-(id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 photoLocalIdentifier:(id)arg3 type:(id)arg4 sizeInBytes:(id)arg5 creationDate:(id)arg6 contentURL:(id)arg7 contentText:(id)arg8 ;
-(id)initWithIdentifier:(id)arg1 cloudIdentifier:(id)arg2 type:(id)arg3 sizeInBytes:(id)arg4 creationDate:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(NSNumber *)size;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSString *)contentText;
-(void)setUti:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)photoLocalIdentifier;
-(void)setContentURL:(NSURL *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setCloudIdentifier:(NSUUID *)arg1 ;
-(void)setContentText:(NSString *)arg1 ;
-(void)setPhotoLocalIdentifier:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(NSUUID *)identifier;
-(NSUUID *)cloudIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

