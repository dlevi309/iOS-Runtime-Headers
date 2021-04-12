/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)nextObject;
-(id)initWithURL:(id)arg1 ;
-(id)error;
-(void)done;
-(id)initWithAsset:(id)arg1 ;
-(Class)itemClass;
-(void)setItemClass:(Class)arg1 ;
-(id)initWithInputStream:(id)arg1 ;
-(id)initWithDeviceID:(int)arg1 fileID:(unsigned long long)arg2 ;
@end

