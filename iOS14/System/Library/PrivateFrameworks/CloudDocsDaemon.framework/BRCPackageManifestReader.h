/*
* Generated on Thursday, January 14, 2021 at 2:26:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSInputStream, PBMessageStreamReader, NSError;

@interface BRCPackageManifestReader : NSEnumerator {

	NSInputStream* _stream;
	PBMessageStreamReader* _reader;
	NSError* _error;

}

@property (assign,nonatomic) Class itemClass; 
-(id)nextObject;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(Class)itemClass;
-(void)done;
-(void)setItemClass:(Class)arg1 ;
-(id)error;
-(id)initWithAsset:(id)arg1 ;
-(id)initWithInputStream:(id)arg1 ;
-(void)dealloc;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
@end

