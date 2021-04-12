/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface PTOutlet : NSObject <NSSecureCoding> {

	unsigned long long _nextToken;
	NSMutableDictionary* _actionsByToken;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)addAction:(/*^block*/id)arg1 ;
-(void)_invokeActions;
-(void)removeActionForToken:(id)arg1 ;
@end

