/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <libobjc.A.dylib/CNHandle.h>
@class NSString;


@protocol CNHandle <NSObject>
@property (nonatomic,copy,readonly) NSString * stringValue; 
@property (nonatomic,copy,readonly) NSString * customIdentifier; 
@property (nonatomic,readonly) unsigned long long type; 
@required
-(unsigned long long)type;
-(NSString *)stringValue;
-(NSString *)customIdentifier;

@end


@class NSString;

@interface CNHandle : NSObject <CNHandle> {

	NSString* _stringValue;
	unsigned long long _type;
	NSString* _customIdentifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * customIdentifier;              //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                       //@synthesize type=_type - In the implementation block
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
-(unsigned long long)type;
-(NSString *)stringValue;
-(NSString *)customIdentifier;
-(id)initWithStringValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithStringValue:(id)arg1 customIdentifier:(id)arg2 type:(unsigned long long)arg3 ;
@end

