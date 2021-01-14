/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
*/


@class BMStreamDatastore;

@interface BMStreamDatastoreWriter : NSObject {

	BMStreamDatastore* _inner;

}
-(BOOL)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 ;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
-(id)streamIdentifier;
-(BOOL)writeEventWithEventBody:(id)arg1 ;
-(void)syncMappedFiles;
-(void)dealloc;
@end

