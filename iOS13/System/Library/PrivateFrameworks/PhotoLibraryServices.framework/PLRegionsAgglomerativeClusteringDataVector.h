/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(unsigned long long)length;
-(id)userInfo;
-(double*)data;
-(void)setUserInfo:(id)arg1 ;
-(id)initWithDataLength:(unsigned long long)arg1 ;
@end

