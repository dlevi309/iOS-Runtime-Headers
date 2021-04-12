/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNHandle.h>
@class NSString;


@protocol CNHandle <NSObject>
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSString * customIdentifier; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(NSString *)stringValue;
-(NSString *)customIdentifier;
-(unsigned long long)type;

@end


@class NSString;

@interface CNHandle : NSObject <CNHandle> {

	NSString* _stringValue;
	unsigned long long _type;
	NSString* _customIdentifier;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * customIdentifier;              //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tuHandleForHandle:(id)arg1 ;
+(unsigned long long)handleTypeForPropertyKey:(id)arg1 ;
+(id)inPersonHandleForHandle:(id)arg1 ;
+(id)keyTypeMapping;
+(long long)tuHandleTypeFromType:(unsigned long long)arg1 ;
+(id)tuHandleTypeMap;
+(long long)inPersonHandleTypeForType:(unsigned long long)arg1 ;
+(id)inPersonHandleTypeMap;
+(long long)geminiHandleTypeForType:(unsigned long long)arg1 ;
+(id)geminiHandleTypeMap;
+(id)geminiHandleForHandle:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2 ;
-(NSString *)stringValue;
-(NSString *)customIdentifier;
-(unsigned long long)type;
-(id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3 ;
@end

