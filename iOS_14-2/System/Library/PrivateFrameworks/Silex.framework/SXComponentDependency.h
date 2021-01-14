/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@class NSString, SXComponentDependencyDescriptor;

@interface SXComponentDependency : NSObject {

	NSString* _fromComponentIdentifier;
	NSString* _toComponentIdentifier;
	long long _fromDependencyAttribute;
	long long _toDependencyAttribute;
	SXComponentDependencyDescriptor* _descriptor;

}
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

