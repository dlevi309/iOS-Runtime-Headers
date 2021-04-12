/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
*/

#import <AudioServerApplication/ASAObject.h>

@class NSString, ASAAudioFormat, NSArray;

@interface ASAStream : ASAObject

@property (nonatomic,copy) NSString * name; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (getter=isInput,nonatomic,readonly) BOOL input; 
@property (getter=isOutput,nonatomic,readonly) BOOL output; 
@property (nonatomic,readonly) unsigned terminalType; 
@property (nonatomic,readonly) unsigned startingChannel; 
@property (nonatomic,readonly) unsigned latency; 
@property (nonatomic,copy) ASAAudioFormat * virtualFormat; 
@property (nonatomic,copy) ASAAudioFormat * physicalFormat; 
@property (nonatomic,copy,readonly) NSArray * availableVirtualFormats; 
@property (nonatomic,copy,readonly) NSArray * availablePhysicalFormats; 
@property (nonatomic,copy,readonly) NSArray * controlObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * controls; 
@property (getter=isVirtualFormatSettable,nonatomic,readonly) BOOL virtualFormatSettable; 
@property (getter=isPhysicalFormatSettable,nonatomic,readonly) BOOL physicalFormatSettable; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isActive;
-(unsigned)latency;
-(NSArray *)controls;
-(unsigned)terminalType;
-(BOOL)isInput;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(ASAAudioFormat *)physicalFormat;
-(void)setPhysicalFormat:(ASAAudioFormat *)arg1 ;
-(unsigned)startingChannel;
-(BOOL)isPhysicalFormatSettable;
-(ASAAudioFormat *)virtualFormat;
-(id)coreAudioClassName;
-(NSArray *)controlObjectIDs;
-(BOOL)isVirtualFormatSettable;
-(NSArray *)availableVirtualFormats;
-(NSArray *)availablePhysicalFormats;
-(BOOL)isOutput;
-(void)setVirtualFormat:(ASAAudioFormat *)arg1 ;
@end

