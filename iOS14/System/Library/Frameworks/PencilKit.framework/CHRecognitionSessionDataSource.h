/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@protocol CHRecognitionSessionDataSource <NSObject>
@optional
-(id)strokeIdentifierFromData:(id)arg1;
-(id)dataRepresentationForStrokeProviderVersion:(id)arg1;
-(id)strokeProviderVersionFromData:(id)arg1;
-(id)dataRepresentationForStrokeIdentifier:(id)arg1;

@required
-(id)strokeProviderSnapshot;

@end

