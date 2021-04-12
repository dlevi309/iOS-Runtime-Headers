/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject {

	AMSURLResult* _result;

}

@property (nonatomic,retain) AMSURLResult * result;              //@synthesize result=_result - In the implementation block
-(id)init;
-(AMSURLResult *)result;
-(void)setResult:(AMSURLResult *)arg1 ;
-(id)parseAMSURLResult:(id)arg1 ;
-(id)_parseTotalFromMetaBag;
-(id)_parseOffsetFromMetaBag;
@end

