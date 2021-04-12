/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
*/

#import <EmbeddedAcousticRecognition/EmbeddedAcousticRecognition-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface _EARCommandTagging : NSObject <NSCopying> {

	unique_ptr<quasar::CommandTagging, std::__1::default_delete<quasar::CommandTagging> >* _tagging;
	NSString* _commandId;
	NSArray* _tagSequence;

}

@property (nonatomic,copy,readonly) NSString * commandId;               //@synthesize commandId=_commandId - In the implementation block
@property (nonatomic,copy,readonly) NSArray * tagSequence;              //@synthesize tagSequence=_tagSequence - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithQuasarCommandTagging:(const CommandTagging*)arg1 ;
-(NSString *)commandId;
-(NSArray *)tagSequence;
-(id)tokensForTag:(id)arg1 ;
@end

