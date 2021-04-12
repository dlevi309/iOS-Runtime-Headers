/*
* Generated on Monday, March 1, 2021 at 2:32:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSNumber;

@interface CLSAuthTree : NSObject <NSSecureCoding> {

	NSMutableDictionary* _graph;
	NSNumber* _overridingStatus;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_addNode:(id)arg1 parentStatusID:(id)arg2 ;
-(id)initWithOverridingStatus:(long long)arg1 ;
-(id)initWithStatus:(long long)arg1 statusID:(id)arg2 identifier:(id)arg3 ;
-(void)setAuthStatus:(long long)arg1 forIdentifier:(id)arg2 statusID:(id)arg3 parentStatusID:(id)arg4 ;
-(long long)authStatusAtIdentifierPath:(id)arg1 ;
@end

