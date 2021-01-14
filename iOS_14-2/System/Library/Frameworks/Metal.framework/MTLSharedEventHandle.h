/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface MTLSharedEventHandle : NSObject <NSSecureCoding> {

	MTLSharedEventHandlePrivate* _priv;

}

@property (readonly) NSString * label; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned)eventPort;
-(unsigned long long)labelTraceID;
-(id)initWithSharedEvent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)label;
-(void)dealloc;
@end

