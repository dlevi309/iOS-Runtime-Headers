/*
* Generated on Thursday, January 14, 2021 at 2:22:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@interface PLRegionsAgglomerativeClusteringDataVector : NSObject {

	double* _data;
	unsigned long long _length;
	id _userInfo;

}

@property (readonly) double* data;                           //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (retain) id userInfo;                              //@synthesize userInfo=_userInfo - In the implementation block
-(void)setUserInfo:(id)arg1 ;
-(id)userInfo;
-(unsigned long long)length;
-(id)initWithDataLength:(unsigned long long)arg1 ;
-(double*)data;
-(void)dealloc;
@end

