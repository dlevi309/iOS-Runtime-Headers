/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleID;
-(NSString *)punchoutLabel;
-(NSURL *)installURL;
-(NSURL *)punchoutURL;
@end

