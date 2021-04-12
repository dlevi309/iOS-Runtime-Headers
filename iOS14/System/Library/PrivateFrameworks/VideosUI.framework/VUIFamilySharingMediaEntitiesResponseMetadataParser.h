/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@class AMSURLResult;

@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject {

	AMSURLResult* _result;

}

@property (nonatomic,retain) AMSURLResult * result;              //@synthesize result=_result - In the implementation block
-(void)setResult:(AMSURLResult *)arg1 ;
-(id)init;
-(AMSURLResult *)result;
-(id)parseAMSURLResult:(id)arg1 ;
-(id)_parseTotalFromMetaBag;
-(id)_parseOffsetFromMetaBag;
@end

