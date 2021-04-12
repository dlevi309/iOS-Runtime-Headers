/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/


@class HDFHIRCredential;

@interface _HDWrappedFHIRCredential : NSObject {

	BOOL _invalidated;
	HDFHIRCredential* _originalCredential;
	HDFHIRCredential* _refreshedCredential;

}

@property (nonatomic,copy,readonly) HDFHIRCredential * originalCredential;               //@synthesize originalCredential=_originalCredential - In the implementation block
@property (nonatomic,copy,readonly) HDFHIRCredential * refreshedCredential;              //@synthesize refreshedCredential=_refreshedCredential - In the implementation block
@property (getter=isInvalidated) BOOL invalidated;                                       //@synthesize invalidated=_invalidated - In the implementation block
-(BOOL)isInvalidated;
-(void)setInvalidated:(BOOL)arg1 ;
-(id)_initWithCredential:(id)arg1 ;
-(void)didRefreshCredential:(id)arg1 ;
-(HDFHIRCredential *)refreshedCredential;
-(HDFHIRCredential *)originalCredential;
@end

