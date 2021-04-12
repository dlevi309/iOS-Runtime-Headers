/*
* Generated on Monday, March 1, 2021 at 2:30:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_CDPDataHarvester.h>

@class NSURL, NSString;

@interface _CDPSerializedDataHarvester : NSObject <_CDPDataHarvester> {

	NSURL* _url;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)url;
-(void)loadWithLimit:(unsigned long long)arg1 dataPointReader:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUrl:(NSURL *)arg1 ;
@end

