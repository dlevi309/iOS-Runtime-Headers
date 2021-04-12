/*
* Generated on Thursday, January 14, 2021 at 2:27:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/


@protocol MRUEndpointMetadataControllerObserver <NSObject>
@optional
-(void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2;
-(void)metadataController:(id)arg1 didUpdateShowMediaSuggestions:(BOOL)arg2;
-(void)metadataController:(id)arg1 didUpdateApplicationIcon:(id)arg2;
-(void)metadataControllerDidChangeState:(id)arg1;
-(void)metadataControllerDidUpdateRoutingAvailability:(id)arg1;
-(void)metadataControllerRouteDidUpdate:(id)arg1;

@required
-(BOOL)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1;

@end

