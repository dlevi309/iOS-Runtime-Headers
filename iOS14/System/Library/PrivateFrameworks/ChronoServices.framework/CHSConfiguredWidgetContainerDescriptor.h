/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface CHSConfiguredWidgetContainerDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	BOOL _stack;
	long long _location;
	unsigned long long _page;
	long long _widgetFamily;
	NSArray* _widgets;

}

@property (nonatomic,readonly) long long location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long page;                //@synthesize page=_page - In the implementation block
@property (nonatomic,readonly) long long widgetFamily;                 //@synthesize widgetFamily=_widgetFamily - In the implementation block
@property (getter=isStack,nonatomic,readonly) BOOL stack;              //@synthesize stack=_stack - In the implementation block
@property (nonatomic,copy,readonly) NSArray * widgets;                 //@synthesize widgets=_widgets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(unsigned long long)page;
-(id)init;
-(long long)widgetFamily;
-(id)initWithLocation:(long long)arg1 page:(unsigned long long)arg2 widgetFamily:(long long)arg3 widgets:(id)arg4 ;
-(long long)location;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isStack;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)widgets;
-(BOOL)isEqual:(id)arg1 ;
@end

