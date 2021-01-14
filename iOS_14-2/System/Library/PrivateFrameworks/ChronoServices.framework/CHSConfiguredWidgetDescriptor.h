/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoServices.framework/ChronoServices
*/

#import <ChronoServices/ChronoServices-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHSWidget, CHSWidgetMetrics, NSString;

@interface CHSConfiguredWidgetDescriptor : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {

	BOOL _inStack;
	BOOL _onTop;
	long long _location;
	unsigned long long _page;
	CHSWidget* _widget;
	CHSWidgetMetrics* _widgetMetrics;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) long long location;                                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) unsigned long long page;                                //@synthesize page=_page - In the implementation block
@property (nonatomic,copy,readonly) CHSWidget * widget;                                //@synthesize widget=_widget - In the implementation block
@property (nonatomic,copy,readonly) NSString * extensionBundleIdentifier; 
@property (nonatomic,copy,readonly) NSString * kind; 
@property (nonatomic,readonly) long long family; 
@property (nonatomic,copy,readonly) CHSWidgetMetrics * widgetMetrics;                  //@synthesize widgetMetrics=_widgetMetrics - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                       //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (getter=isInStack,nonatomic,readonly) BOOL inStack;                          //@synthesize inStack=_inStack - In the implementation block
@property (getter=isOnTop,nonatomic,readonly) BOOL onTop;                              //@synthesize onTop=_onTop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)succinctDescription;
-(unsigned long long)page;
-(CHSWidget *)widget;
-(BOOL)isInStack;
-(id)init;
-(CHSWidgetMetrics *)widgetMetrics;
-(id)initWithWidget:(id)arg1 uniqueIdentifier:(id)arg2 location:(long long)arg3 page:(unsigned long long)arg4 widgetMetrics:(id)arg5 inStack:(BOOL)arg6 onTop:(BOOL)arg7 ;
-(long long)location;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isOnTop;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(NSString *)kind;
-(long long)family;
-(NSString *)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)extensionBundleIdentifier;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

