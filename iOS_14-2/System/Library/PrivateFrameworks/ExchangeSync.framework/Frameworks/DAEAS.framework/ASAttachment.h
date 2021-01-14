/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/DAMailMessageAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSURL;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding> {

	NSString* _name;
	NSNumber* _size;
	NSNumber* _method;
	NSString* _displayName;
	NSString* _contentId;
	NSString* _contentLocation;
	NSNumber* _isInline;
	NSNumber* _hasBase64Transfer;
	NSString* _clientId;
	NSURL* _localPath;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber * method;                         //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;                //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSNumber * isInline;                       //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,copy) NSNumber * hasBase64Transfer;              //@synthesize hasBase64Transfer=_hasBase64Transfer - In the implementation block
@property (nonatomic,copy) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
@property (nonatomic,copy) NSURL * localPath;                         //@synthesize localPath=_localPath - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSString *)contentId;
-(void)setClientId:(NSString *)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentLocation;
-(void)setContentLocation:(NSString *)arg1 ;
-(NSNumber *)method;
-(NSNumber *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSize:(NSNumber *)arg1 ;
-(NSURL *)localPath;
-(void)setIsInline:(NSNumber *)arg1 ;
-(NSString *)name;
-(id)description;
-(NSNumber *)isInline;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)clientId;
-(id)initWithCoder:(id)arg1 ;
-(void)setMethod:(NSNumber *)arg1 ;
-(BOOL)isMostDefinitelyBase64ed;
-(void)setName:(NSString *)arg1 ;
-(NSString *)displayName;
-(void)setLocalPath:(NSURL *)arg1 ;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setHasBase64Transfer:(NSNumber *)arg1 ;
-(NSNumber *)hasBase64Transfer;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
@end

