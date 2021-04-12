/*
* Generated on Thursday, January 14, 2021 at 2:27:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
*/

#import <BrookDataCollection/BrookDataCollection-Structs.h>
#import <BrookDataCollection/BRKWriter.h>
#import <libobjc.A.dylib/BRKAudioWriter.h>

@class NSString;

@interface BRKAudioFileWriter : BRKWriter <BRKAudioWriter> {

	OpaqueExtAudioFileRef _audioFile;
	AudioStreamBasicDescription _format;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(void)_lock_writeSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
-(void)_lock_close;
-(void)writeSamples:(const short*)arg1 count:(unsigned long long)arg2 ;
@end

