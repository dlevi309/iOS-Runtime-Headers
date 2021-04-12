/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSNumber, NSMutableArray, NSArray;

@interface ASResolveRecipientsCertificatesItem : ASItem {

	NSNumber* _certCount;
	NSNumber* _recipientCount;
	NSNumber* _easStatus;
	NSMutableArray* _mCertificates;

}

@property (nonatomic,retain) NSMutableArray * mCertificates;                         //@synthesize mCertificates=_mCertificates - In the implementation block
@property (nonatomic,retain) NSNumber * certCount;                                   //@synthesize certCount=_certCount - In the implementation block
@property (nonatomic,retain) NSNumber * recipientCount;                              //@synthesize recipientCount=_recipientCount - In the implementation block
@property (setter=setEASStatus:,nonatomic,retain) NSNumber * easStatus;              //@synthesize easStatus=_easStatus - In the implementation block
@property (nonatomic,readonly) NSArray * certificates; 
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSArray *)certificates;
-(void)setRecipientCount:(NSNumber *)arg1 ;
-(NSNumber *)recipientCount;
-(NSNumber *)easStatus;
-(NSNumber *)certCount;
-(NSMutableArray *)mCertificates;
-(void)setMCertificates:(NSMutableArray *)arg1 ;
-(void)setCertCount:(NSNumber *)arg1 ;
-(void)setEASStatus:(id)arg1 ;
-(void)addCertificateString:(id)arg1 ;
@end

