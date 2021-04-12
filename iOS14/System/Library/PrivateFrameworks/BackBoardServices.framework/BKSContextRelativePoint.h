/*
* Generated on Thursday, January 14, 2021 at 2:20:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCSecureCoding.h>

@class NSString;

@interface BKSContextRelativePoint : NSObject <BSXPCSecureCoding> {

	unsigned _contextID;
	CGPoint _point;

}

@property (nonatomic,readonly) CGPoint point;                       //@synthesize point=_point - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                  //@synthesize contextID=_contextID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsBSXPCSecureCoding;
-(CGPoint)point;
-(void)encodeWithBSXPCCoder:(id)arg1 ;
-(unsigned)contextID;
-(unsigned long long)hash;
-(id)initWithPoint:(CGPoint)arg1 contextID:(unsigned)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBSXPCCoder:(id)arg1 ;
@end

