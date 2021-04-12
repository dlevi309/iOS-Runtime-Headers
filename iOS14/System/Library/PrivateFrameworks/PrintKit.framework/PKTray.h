/*
* Generated on Thursday, January 14, 2021 at 2:28:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSDictionary, NSString;

@interface PKTray : NSObject {

	NSDictionary* _trayDict;

}

@property (retain) NSDictionary * trayDict;                 //@synthesize trayDict=_trayDict - In the implementation block
@property (readonly) BOOL isEmpty; 
@property (readonly) NSString * name; 
@property (readonly) NSString * localizedName; 
+(id)traysWithAttrs:(ipp_sRef)arg1 ;
+(id)filter:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(id)trayWithString:(id)arg1 andMediaSource:(id)arg2 ;
-(NSString *)localizedName;
-(NSString *)name;
-(id)description;
-(BOOL)isEmpty;
-(void)dealloc;
-(id)initWithString:(id)arg1 andMediaSource:(id)arg2 ;
-(void)setTrayDict:(NSDictionary *)arg1 ;
-(NSDictionary *)trayDict;
@end

