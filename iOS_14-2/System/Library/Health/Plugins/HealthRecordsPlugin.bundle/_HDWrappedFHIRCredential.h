/*
* Generated on Thursday, January 14, 2021 at 2:29:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

