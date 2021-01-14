/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel {

	NSString* _name;
	NSString* _bundleID;
	NSString* _punchoutLabel;
	NSURL* _punchoutURL;
	NSURL* _installURL;

}

@property (nonatomic,copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * punchoutLabel;              //@synthesize punchoutLabel=_punchoutLabel - In the implementation block
@property (nonatomic,readonly) NSURL * punchoutURL;                        //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,readonly) NSURL * installURL;                         //@synthesize installURL=_installURL - In the implementation block
+(id)schema;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)bundleID;
-(NSString *)punchoutLabel;
-(NSURL *)punchoutURL;
-(NSURL *)installURL;
@end

