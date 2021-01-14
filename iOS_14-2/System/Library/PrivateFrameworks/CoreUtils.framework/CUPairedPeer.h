/*
* Generated on Thursday, January 14, 2021 at 2:21:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSData, NSUUID, NSString, NSDate;

@interface CUPairedPeer : NSObject <NSSecureCoding> {

	NSDictionary* _acl;
	NSData* _altIRK;
	NSUUID* _identifier;
	NSDictionary* _info;
	NSString* _label;
	NSString* _model;
	NSString* _name;
	NSData* _publicKey;
	NSDate* _dateModified;
	NSString* _identifierStr;

}

@property (nonatomic,copy) NSDate * dateModified;                 //@synthesize dateModified=_dateModified - In the implementation block
@property (nonatomic,copy) NSString * identifierStr;              //@synthesize identifierStr=_identifierStr - In the implementation block
@property (nonatomic,copy) NSDictionary * acl;                    //@synthesize acl=_acl - In the implementation block
@property (nonatomic,copy) NSData * altIRK;                       //@synthesize altIRK=_altIRK - In the implementation block
@property (nonatomic,copy) NSUUID * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) NSString * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSData * publicKey;                    //@synthesize publicKey=_publicKey - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)publicKey;
-(id)detailedDescription;
-(NSString *)model;
-(NSDictionary *)info;
-(void)setPublicKey:(NSData *)arg1 ;
-(NSData *)altIRK;
-(NSDictionary *)acl;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAcl:(NSDictionary *)arg1 ;
-(NSString *)name;
-(NSString *)identifierStr;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(NSUUID *)identifier;
-(void)setAltIRK:(NSData *)arg1 ;
-(void)setDateModified:(NSDate *)arg1 ;
-(NSDate *)dateModified;
-(NSString *)label;
-(void)setIdentifierStr:(NSString *)arg1 ;
@end

