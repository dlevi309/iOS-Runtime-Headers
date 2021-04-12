/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/

#import <Espresso/Espresso-Structs.h>
#import <libobjc.A.dylib/ETDataProvider.h>

@class NSString, NSArray;

@interface ETImageFolderDataProvider : NSObject <ETDataProvider> {

	vector<std::__1::pair<NSString *, unsigned long>, std::__1::allocator<std::__1::pair<NSString *, unsigned long> > >* samples;
	vector<NSString *, std::__1::allocator<NSString *> >* classes;
	shared_ptr<Espresso::blob_cpu>* imageBlob;
	shared_ptr<Espresso::blob_cpu>* labelBlob;
	shared_ptr<Espresso::abstract_context>* ctx;
	int nChannels;
	NSString* imageTensorName;
	NSArray* imageShape;
	vimage2espresso_param param;
	NSString* labelTensorName;
	NSArray* labelShape;
	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> randomgen;

}
-(id)dataPointAtIndex:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)numberOfDataPoints;
-(vImage_Buffer*)bufferWithPath:(id)arg1 ;
-(id)initWithFolder:(id)arg1 forImage:(id)arg2 ofShape:(id)arg3 andLabel:(id)arg4 ;
-(void)setImageTransforParams:(BOOL)arg1 biasR:(float)arg2 biasG:(float)arg3 biasB:(float)arg4 scale:(float)arg5 ;
-(vImage_Buffer*)preprocess:(vImage_Buffer*)arg1 ;
@end

