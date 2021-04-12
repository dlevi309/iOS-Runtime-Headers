/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSNumber *)size;
-(NSNumber *)method;
-(NSString *)displayName;
-(void)setSize:(NSNumber *)arg1 ;
-(void)setMethod:(NSNumber *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)clientId;
-(NSString *)contentId;
-(NSString *)contentLocation;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setClientId:(NSString *)arg1 ;
-(NSURL *)localPath;
-(NSNumber *)isInline;
-(BOOL)isMostDefinitelyBase64ed;
-(void)setIsInline:(NSNumber *)arg1 ;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setHasBase64Transfer:(NSNumber *)arg1 ;
-(NSNumber *)hasBase64Transfer;
-(void)appendActiveSyncDataForTask:(id)arg1 toData:(id)arg2 ;
-(void)setLocalPath:(NSURL *)arg1 ;
@end

