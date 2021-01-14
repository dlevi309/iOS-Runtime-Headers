/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
*/


#import <AdID/AdID-Structs.h>
@class NSString;

@interface ADAppVectorsFile : NSObject {

	unsigned _nextIndex;
	unsigned long long _numberOfVectors;
	NSString* _vectorVersion;
	_sFILE* _file;

}

@property (assign,nonatomic) unsigned long long numberOfVectors;              //@synthesize numberOfVectors=_numberOfVectors - In the implementation block
@property (nonatomic,copy) NSString * vectorVersion;                          //@synthesize vectorVersion=_vectorVersion - In the implementation block
@property (assign,nonatomic) _sFILE* file;                                    //@synthesize file=_file - In the implementation block
@property (assign,nonatomic) unsigned nextIndex;                              //@synthesize nextIndex=_nextIndex - In the implementation block
-(unsigned)nextIndex;
-(_sFILE*)file;
-(void)setFile:(_sFILE*)arg1 ;
-(void)dealloc;
-(id)initForReadingContentsOfURL:(id)arg1 version:(id)arg2 ;
-(id)nextVector;
-(unsigned long long)numberOfVectors;
-(NSString *)vectorVersion;
-(void)setNumberOfVectors:(unsigned long long)arg1 ;
-(void)setVectorVersion:(NSString *)arg1 ;
-(void)setNextIndex:(unsigned)arg1 ;
@end

