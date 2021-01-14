/*
* Generated on Thursday, January 14, 2021 at 2:28:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SensingProtocols.framework/SensingProtocols
*/


@class NSString;

@interface GPBEnumDescriptor : NSObject {

	NSString* name_;
	const char* valueNames_;
	const int* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;
	unsigned* nameOffsets_;
	unsigned valueCount_;

}

@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
@property (nonatomic,readonly) unsigned enumNameCount; 
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
+(id)allocDescriptorForName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 extraTextFormatInfo:(const char*)arg6 ;
-(id)textFormatNameForValue:(int)arg1 ;
-(NSString *)name;
-(BOOL)getValue:(int*)arg1 forEnumName:(id)arg2 ;
-(/*function pointer*/void*)enumVerifier;
-(id)enumNameForValue:(int)arg1 ;
-(id)initWithName:(id)arg1 valueNames:(const char*)arg2 values:(const int*)arg3 count:(unsigned)arg4 enumVerifier:(/*function pointer*/void*)arg5 ;
-(BOOL)getValue:(int*)arg1 forEnumTextFormatName:(id)arg2 ;
-(void)calcValueNameOffsets;
-(void)dealloc;
-(id)getEnumNameForIndex:(unsigned)arg1 ;
-(id)getEnumTextFormatNameForIndex:(unsigned)arg1 ;
-(unsigned)enumNameCount;
@end

