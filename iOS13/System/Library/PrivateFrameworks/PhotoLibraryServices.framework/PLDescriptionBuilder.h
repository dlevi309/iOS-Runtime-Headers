/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)descriptionBuilderWithObject:(id)arg1 ;
+(id)prettyMultiLineDescriptionBuilderWithObject:(id)arg1 indent:(long long)arg2 ;
+(id)plainMultiLineDescriptionBuilder;
+(id)plainDescriptionBuilder;
-(long long)style;
-(id)build;
-(NSString *)separator;
-(void)setSeparator:(NSString *)arg1 ;
-(void)appendName:(id)arg1 object:(id)arg2 ;
-(void)appendName:(id)arg1 integerValue:(long long)arg2 ;
-(void)appendName:(id)arg1 boolValue:(BOOL)arg2 ;
-(void)appendName:(id)arg1 doubleValue:(double)arg2 ;
-(void)appendName:(id)arg1 typeCode:(const char*)arg2 value:(const void*)arg3 ;
-(id)initWithObject:(id)arg1 style:(long long)arg2 indent:(long long)arg3 ;
-(void)appendName:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2 ;
-(long long)indent;
-(void)appendName:(id)arg1 floatValue:(float)arg2 ;
-(void)appendName:(id)arg1 cgSize:(CGSize)arg2 ;
@end

