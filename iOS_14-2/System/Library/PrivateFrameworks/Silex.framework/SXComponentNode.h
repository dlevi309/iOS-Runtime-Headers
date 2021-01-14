/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, NSMutableSet;

@interface SXComponentNode : NSObject {

	NSString* _componentIdentifier;
	long long _attribute;
	NSMutableSet* _mutableDependencies;
	NSMutableSet* _toPositionDependencies;
	NSMutableSet* _toSizeDependencies;

}
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

