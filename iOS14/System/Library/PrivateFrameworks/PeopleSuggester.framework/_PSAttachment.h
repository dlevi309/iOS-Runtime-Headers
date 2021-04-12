/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSString, NSUUID, NSURL;

@interface _PSAttachment : NSObject <NSSecureCoding> {

	NSDate* _creationDate;
	NSString* _UTI;
	NSString* _photoLocalIdentifier;
	NSUUID* _identifier;
	NSUUID* _cloudIdentifier;
	NSURL* _contentURL;
	NSString* _contentText;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;                        //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * UTI;                               //@synthesize UTI=_UTI - In the implementation block
@property (nonatomic,copy,readonly) NSString * photoLocalIdentifier;              //@synthesize photoLocalIdentifier=_photoLocalIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * cloudIdentifier;                     //@synthesize cloudIdentifier=_cloudIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSURL * contentURL;                           //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentText;                       //@synthesize contentText=_contentText - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSURL *)contentURL;
-(NSString *)contentText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCreationDate:(id)arg1 UTI:(id)arg2 photoLocalIdentifier:(id)arg3 identifier:(id)arg4 cloudIdentifier:(id)arg5 contentURL:(id)arg6 contentText:(id)arg7 ;
-(id)description;
-(NSDate *)creationDate;
-(NSString *)photoLocalIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)UTI;
-(NSUUID *)identifier;
-(NSUUID *)cloudIdentifier;
@end

