/*
* Generated on Monday, March 1, 2021 at 2:35:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/


@class NSURL, NSString, NSSet;

@interface NPKTapToRadarRequest : NSObject {

	NSURL* _tapToRadarURL;
	NSString* _title;
	NSString* _body;
	NSSet* _attachmentsPaths;

}

@property (nonatomic,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * body;                       //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) NSSet * attachmentsPaths;              //@synthesize attachmentsPaths=_attachmentsPaths - In the implementation block
@property (nonatomic,readonly) NSURL * tapToRadarURL; 
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(NSString *)title;
-(NSString *)body;
-(id)_attachmentURLs;
-(NSURL *)tapToRadarURL;
-(id)initWithTitle:(id)arg1 body:(id)arg2 attachmentPaths:(id)arg3 ;
-(NSSet *)attachmentsPaths;
@end

