/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <DialogEngine/DialogEngine-Structs.h>
#import <DialogEngine/DENode.h>

@class NSString, DESpeakableString;

@interface DEDialog : DENode {

	shared_ptr<siri::dialogengine::Dialog>* _This;

}

@property (assign) shared_ptr<siri::dialogengine::Dialog>* This;              //@synthesize This=_This - In the implementation block
@property (assign) NSString * id; 
@property (assign) DESpeakableString * content; 
@property (assign) DESpeakableString * caption; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)validate:(id)arg1 ;
-(DESpeakableString *)content;
-(void)setContent:(DESpeakableString *)arg1 ;
-(DESpeakableString *)caption;
-(void)setCaption:(DESpeakableString *)arg1 ;
-(NSString *)id;
-(void)setId:(NSString *)arg1 ;
-(void)setThis:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(shared_ptr<siri::dialogengine::Dialog>*)This;
-(id)initWithSharedPtr:(shared_ptr<siri::dialogengine::Dialog>*)arg1 ;
-(BOOL)isSelectable:(id)arg1 ;
@end

