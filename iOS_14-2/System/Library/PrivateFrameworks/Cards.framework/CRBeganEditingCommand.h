/*
* Generated on Thursday, January 14, 2021 at 2:27:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Cards.framework/Cards
*/

#import <Cards/Cards-Structs.h>
#import <libobjc.A.dylib/CRCommand.h>

@class NSDictionary, NSString;

@interface CRBeganEditingCommand : NSObject <CRCommand> {

	unsigned long long _commandDirection;
	NSDictionary* userInfo;

}

@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long commandDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)commandDirection;
-(void)setCommandDirection:(unsigned long long)arg1 ;
@end

