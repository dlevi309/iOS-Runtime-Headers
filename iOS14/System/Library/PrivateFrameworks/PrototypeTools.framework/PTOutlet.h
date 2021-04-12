/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)addAction:(/*^block*/id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)_invokeActions;
-(void)removeActionForToken:(id)arg1 ;
@end

