/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSProtobufSchemaBuilder.h>

@class NSMutableData, NSString;

@interface BSProtobufSchema : NSObject <BSProtobufSchemaBuilder> {

	Class _rootClass;
	BSProtobufSchema* _superSchema;
	long long _fieldCount;
	long long _autotagIndex;
	BSProtobufFieldEntry* _entries;
	NSMutableData* _memoryData;
	BOOL _respondsToDidFinishProtobufDecodingWithError;
	BOOL _respondsToInitForProtobufDecoding;
	BOOL _respondsToInitProtobufTranslatorForObject;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 ;
-(void)addField:(const char*)arg1 forTag:(long long)arg2 ;
-(void)addRepeatingField:(const char*)arg1 containsClass:(Class)arg2 forTag:(long long)arg3 ;
-(void)addRepeatingField:(const char*)arg1 containsClasses:(id)arg2 ;
-(void)addField:(const char*)arg1 ;
-(void)addField:(const char*)arg1 allowedClasses:(id)arg2 ;
-(void)dealloc;
@end

