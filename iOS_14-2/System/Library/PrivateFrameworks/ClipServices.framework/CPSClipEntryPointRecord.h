/*
* Generated on Thursday, January 14, 2021 at 2:26:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClipServices.framework/ClipServices
*/


@class NSString;

@interface CPSClipEntryPointRecord : NSObject {

	NSString* _appClipBundleID;
	NSString* _webClipIdentifier;
	double _lastABRFetchTime;

}

@property (nonatomic,copy) NSString * appClipBundleID;                //@synthesize appClipBundleID=_appClipBundleID - In the implementation block
@property (nonatomic,copy) NSString * webClipIdentifier;              //@synthesize webClipIdentifier=_webClipIdentifier - In the implementation block
@property (assign,nonatomic) double lastABRFetchTime;                 //@synthesize lastABRFetchTime=_lastABRFetchTime - In the implementation block
-(NSString *)webClipIdentifier;
-(id)initWithSQLiteRow:(id)arg1 ;
-(void)setWebClipIdentifier:(NSString *)arg1 ;
-(NSString *)appClipBundleID;
-(void)setAppClipBundleID:(NSString *)arg1 ;
-(double)lastABRFetchTime;
-(void)setLastABRFetchTime:(double)arg1 ;
@end

