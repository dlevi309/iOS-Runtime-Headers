/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSMutableString, NSString, _PLDescriptionStyle;

@interface PLDescriptionBuilder : NSObject {

	NSObject* _object;
	NSMutableString* _description;
	NSString* _separator;
	long long _indent;
	NSString* _indentString;
	_PLDescriptionStyle* _style;
	long long _descriptionStyle;

}

@property (nonatomic,copy) NSString * separator;              //@synthesize separator=_separator - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) long long indent; 
+(id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2 ;
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)plainDescriptionBuilder;
+(id)plainMultiLineDescriptionBuilder;
-(id)build;
-(void)appendName:(id)arg1 floatValue:(float)arg2 ;
-(void)appendName:(id)arg1 cgSize:(CGSize)arg2 ;
-(void)appendName:(id)arg1 object:(id)arg2 ;
-(void)appendName:(id)arg1 typeCode:(const char*)arg2 value:(const void*)arg3 ;
-(long long)indent;
-(NSString *)separator;
-(void)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(void)appendName:(id)arg1 boolValue:(BOOL)arg2 ;
-(void)setSeparator:(NSString *)arg1 ;
-(id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3 ;
-(long long)style;
-(void)appendName:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2 ;
-(void)appendName:(id)arg1 integerValue:(long long)arg2 ;
@end

