/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/MTLModel.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MTLJSONSerializing.h>

@class NSString, NSDictionary;

@interface WFMediaRouteDescriptor : MTLModel <NSSecureCoding, MTLJSONSerializing> {

	BOOL _isLocalDevice;
	NSString* _routeName;
	NSString* _groupUID;
	NSString* _routeUID;

}

@property (nonatomic,copy,readonly) NSString * routeName;                        //@synthesize routeName=_routeName - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupUID;                         //@synthesize groupUID=_groupUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeUID;                         //@synthesize routeUID=_routeUID - In the implementation block
@property (nonatomic,readonly) BOOL isLocalDevice;                               //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)JSONKeyPathsByPropertyKey;
+(BOOL)routeUID:(id)arg1 isEqualToRouteUID:(id)arg2 ;
-(NSString *)routeName;
-(NSString *)routeUID;
-(BOOL)isLocalDevice;
-(NSString *)groupUID;
-(NSString *)displayName;
-(id)initWithRouteUID:(id)arg1 groupUID:(id)arg2 routeName:(id)arg3 isLocalDevice:(BOOL)arg4 ;
-(BOOL)isEqualInRouteUIDs:(id)arg1 ;
-(id)findMatchingRoute:(id)arg1 ;
@end

