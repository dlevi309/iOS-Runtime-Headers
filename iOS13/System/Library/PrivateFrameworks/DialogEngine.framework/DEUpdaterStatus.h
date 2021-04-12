/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSString;

@interface DEUpdaterStatus : NSObject {

	BOOL _upToDate;
	BOOL _disabled;
	NSString* _publicationId;

}

@property (nonatomic,retain) NSString * publicationId;              //@synthesize publicationId=_publicationId - In the implementation block
@property (assign,nonatomic) BOOL upToDate;                         //@synthesize upToDate=_upToDate - In the implementation block
@property (assign,nonatomic) BOOL disabled;                         //@synthesize disabled=_disabled - In the implementation block
-(BOOL)disabled;
-(void)setDisabled:(BOOL)arg1 ;
-(id)initWithPublicationId:(id)arg1 upToDate:(BOOL)arg2 ;
-(NSString *)publicationId;
-(void)setPublicationId:(NSString *)arg1 ;
-(BOOL)upToDate;
-(void)setUpToDate:(BOOL)arg1 ;
@end

